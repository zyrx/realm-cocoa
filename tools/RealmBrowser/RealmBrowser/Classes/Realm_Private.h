////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Realm/Realm.h>

#ifndef RealmBrowser_Realm_Private_h
#define RealmBrowser_Realm_Private_h

@interface RLMRealm (Dynamic)

+ (instancetype)realmWithPath:(NSString *)path
                     readOnly:(BOOL)readonly
                     inMemory:(BOOL)inMemory
                      dynamic:(BOOL)dynamic
                       schema:(RLMSchema *)customSchema
                        error:(NSError **)outError;

- (RLMResults *)allObjects:(NSString *)className;

- (RLMArray *)objects:(NSString *)className where:(NSString *)predicateFormat, ...;

@end

@interface RLMArray (Private)

- (instancetype)initWithObjectClassName:(NSString *)objectClassName;

@end

#endif

//
//  AppContext.h
//  Antidote
//
//  Created by Dmytro Vorobiov on 19.05.15.
//  Copyright (c) 2015 dvor. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppearanceManager;
@class EventsManager;
@class OCTManager;
@class UserDefaultsManager;

@interface AppContext : NSObject

+ (instancetype)sharedContext;

@property (strong, nonatomic, readonly) AppearanceManager *appearance;
@property (strong, nonatomic, readonly) EventsManager *events;
@property (strong, nonatomic, readonly) OCTManager *toxManager;
@property (strong, nonatomic, readonly) UserDefaultsManager *userDefaults;

- (void)restoreDefaultSettings;
- (void)reloadToxManager;
- (void)recreateAppearance;

@end

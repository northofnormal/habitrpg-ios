//
//  Reward.h
//  HabitRPG
//
//  Created by Phillip Thelen on 07/04/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MetaReward.h"
#import "Tag.h"

@class User;

@interface Reward : MetaReward

@property(nonatomic, retain) NSDate *dateCreated;
@property(nonatomic, retain) User *user;
@property(nonatomic, retain) NSSet *tags;
@property(nonatomic, getter = getTagDictionary, setter = setTagDictionary:) NSDictionary *tagDictionary;

- (void)addTagsObject:(Tag *)value;

- (void)removeTagsObject:(Tag *)value;

- (void)addTags:(NSSet *)values;

- (void)removeTags:(NSSet *)values;

@end

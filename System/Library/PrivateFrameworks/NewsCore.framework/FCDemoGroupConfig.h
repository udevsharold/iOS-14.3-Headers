/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FCDemoGroupConfig : NSObject <NSCopying> {

	unsigned long long _demoGroupType;
	NSString* _topicID;
	NSArray* _articleIDs;

}

@property (nonatomic,readonly) unsigned long long demoGroupType;              //@synthesize demoGroupType=_demoGroupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * topicID;                       //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * articleIDs;                     //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagIDs; 
-(NSArray *)articleIDs;
-(id)init;
-(NSString *)topicID;
-(unsigned long long)demoGroupType;
-(NSArray *)tagIDs;
-(id)initWithDictionary:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTHeadlinePersonalizationMetadata.h>
@class NSString, NSDictionary;


@protocol NTHeadlinePersonalizationMetadata <NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSDictionary * scoredTopicIDs; 
@required
-(NSString *)publisherID;
-(NSString *)articleID;
-(NSDictionary *)scoredTopicIDs;

@end


@class NSString, NSDictionary;

@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata> {

	NSString* _articleID;
	NSString* _publisherID;
	NSDictionary* _scoredTopicIDs;

}

@property (nonatomic,copy,readonly) NSString * articleID;                       //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherID;                     //@synthesize publisherID=_publisherID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * scoredTopicIDs;              //@synthesize scoredTopicIDs=_scoredTopicIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)publisherID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)articleID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)scoredTopicIDs;
-(id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3 ;
@end

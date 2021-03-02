/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject, NSOrderedSet, NSDictionary;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {

	NSObject*<NSCopying>*<NSSecureCoding> _identifier;
	NSOrderedSet* _articleIDs;
	NSDictionary* _overrideHeadlineMetadataByArticleID;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDs;                                       //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * overrideHeadlineMetadataByArticleID;              //@synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID - In the implementation block
-(void)setArticleIDs:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)articleIDs;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2 ;
-(NSDictionary *)overrideHeadlineMetadataByArticleID;
-(void)setOverrideHeadlineMetadataByArticleID:(NSDictionary *)arg1 ;
@end

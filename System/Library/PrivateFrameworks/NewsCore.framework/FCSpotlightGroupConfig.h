/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCGroupConfig.h>

@class NSString, NSDate;

@interface FCSpotlightGroupConfig : FCGroupConfig {

	NSString* _spotlightArticleID;
	NSDate* _publishDate;

}

@property (nonatomic,copy,readonly) NSString * spotlightArticleID;                                //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishDate;                                         //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * spotlightCallToActionTitle; 
@property (nonatomic,copy,readonly) NSString * spotlightEyebrowTitle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemStyle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> spotlightItemDarkStyle; 
-(NSString *)spotlightCallToActionTitle;
-(id<FCCardStyleProviding>)spotlightItemStyle;
-(id<FCCardStyleProviding>)spotlightItemDarkStyle;
-(NSDate *)publishDate;
-(NSString *)spotlightEyebrowTitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)spotlightArticleID;
@end

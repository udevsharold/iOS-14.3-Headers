/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, UIImage;

@interface NUFeedTitleViewUpdate : NSObject <NSCopying> {

	NSString* _accessibilityTitle;
	unsigned long long _type;
	unsigned long long _updateType;
	unsigned long long _storyCount;
	NSString* _feedName;
	NSAttributedString* _attributedText;
	UIImage* _feedImage;
	double _lingerTimeInterval;

}

@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long updateType;                //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) unsigned long long storyCount;                  //@synthesize storyCount=_storyCount - In the implementation block
@property (nonatomic,copy) NSString * feedName;                              //@synthesize feedName=_feedName - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIImage * feedImage;                            //@synthesize feedImage=_feedImage - In the implementation block
@property (assign,nonatomic) double lingerTimeInterval;                      //@synthesize lingerTimeInterval=_lingerTimeInterval - In the implementation block
@property (nonatomic,copy) NSString * accessibilityTitle;                    //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
+(id)feedTitleViewUpdateForCheckingForNewStories;
+(id)feedTitleViewUpdateForFeedName:(id)arg1 ;
+(id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)arg1 storyCount:(unsigned long long)arg2 linger:(BOOL)arg3 ;
+(id)feedTitleViewUpdateForAttributedText:(id)arg1 ;
+(id)feedTitleViewUpdateForFeedImage:(id)arg1 accessibilityTitle:(id)arg2 ;
+(id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)arg1 ;
+(id)feedTitleViewUpdateCheckingForNewStoriesForType:(unsigned long long)arg1 ;
+(id)feedTitleViewUpdateEmptyState;
+(id)feedTitleViewUpdateEmptyStateForType:(unsigned long long)arg1 ;
+(id)feedTitleViewUpdateForAttributedText:(id)arg1 forType:(unsigned long long)arg2 ;
+(id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)arg1 storyCount:(unsigned long long)arg2 ;
-(unsigned long long)updateType;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(id)convertToTitleViewUpdateWithCompact:(BOOL)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setLingerTimeInterval:(double)arg1 ;
-(UIImage *)feedImage;
-(void)setFeedName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 updateType:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)feedName;
-(void)setStoryCount:(unsigned long long)arg1 ;
-(double)lingerTimeInterval;
-(unsigned long long)storyCount;
-(void)setFeedImage:(UIImage *)arg1 ;
-(NSString *)accessibilityTitle;
@end

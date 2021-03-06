/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class UIColor, NSString;

@interface NFLHeadlineCollectionViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes {

	BOOL _showAccessoryText;
	BOOL _hasVideo;
	BOOL _shouldAdjustPublisherLogo;
	BOOL _layoutHasTooMuchWhiteSpaceInCurrentState;
	BOOL _titleTruncates;
	double _selectionCornerRadius;
	UIColor* _numberedCircleColor;
	UIColor* _backgroundColor;
	long long _titleTextAlignment;
	NSString* _titleFontName;
	double _titleFontSize;
	double _titleLineHeight;
	UIColor* _publisherLogoColor;
	long long _publisherLogoContentMode;
	NSString* _excerptFontName;
	double _excerptFontSize;
	double _excerptLineHeight;
	long long _accessoryContentMode;
	NSString* _accessoryFontName;
	double _accessoryViewBottomPadding;
	double _accessoryViewTopPadding;
	double _accessoryContentViewLeftPadding;
	double _accessoryContentViewRightPadding;
	unsigned long long _numberOfSegments;
	unsigned long long _segmentedColorViewDirection;
	UIColor* _accessoryFontColor;
	UIColor* _accessoryIconColor;
	double _accessoryFontSize;
	double _accessoryLineHeight;
	long long _imagePosition;
	double _minimumHeightBetweenLowestTextFrameAndBottomOfContent;
	double _whiteSpace;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _selectionInset;
	CGRect _imageViewFrame;
	CGRect _numberedCircleFrame;
	CGRect _titleFrame;
	CGRect _excerptFrame;
	CGRect _accessoryViewFrame;
	CGRect _segmentedColorViewFrame;
	CGRect _sharrowFrame;
	CGRect _publisherLogoFrame;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                 //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selectionInset;                                               //@synthesize selectionInset=_selectionInset - In the implementation block
@property (assign,nonatomic) double selectionCornerRadius;                                              //@synthesize selectionCornerRadius=_selectionCornerRadius - In the implementation block
@property (assign,nonatomic) CGRect imageViewFrame;                                                     //@synthesize imageViewFrame=_imageViewFrame - In the implementation block
@property (assign,nonatomic) CGRect numberedCircleFrame;                                                //@synthesize numberedCircleFrame=_numberedCircleFrame - In the implementation block
@property (nonatomic,retain) UIColor * numberedCircleColor;                                             //@synthesize numberedCircleColor=_numberedCircleColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) CGRect titleFrame;                                                         //@synthesize titleFrame=_titleFrame - In the implementation block
@property (assign,nonatomic) long long titleTextAlignment;                                              //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                                                  //@synthesize titleFontName=_titleFontName - In the implementation block
@property (assign,nonatomic) double titleFontSize;                                                      //@synthesize titleFontSize=_titleFontSize - In the implementation block
@property (assign,nonatomic) double titleLineHeight;                                                    //@synthesize titleLineHeight=_titleLineHeight - In the implementation block
@property (nonatomic,retain) UIColor * publisherLogoColor;                                              //@synthesize publisherLogoColor=_publisherLogoColor - In the implementation block
@property (assign,nonatomic) long long publisherLogoContentMode;                                        //@synthesize publisherLogoContentMode=_publisherLogoContentMode - In the implementation block
@property (assign,nonatomic) CGRect excerptFrame;                                                       //@synthesize excerptFrame=_excerptFrame - In the implementation block
@property (nonatomic,retain) NSString * excerptFontName;                                                //@synthesize excerptFontName=_excerptFontName - In the implementation block
@property (assign,nonatomic) double excerptFontSize;                                                    //@synthesize excerptFontSize=_excerptFontSize - In the implementation block
@property (assign,nonatomic) double excerptLineHeight;                                                  //@synthesize excerptLineHeight=_excerptLineHeight - In the implementation block
@property (assign,nonatomic) CGRect accessoryViewFrame;                                                 //@synthesize accessoryViewFrame=_accessoryViewFrame - In the implementation block
@property (assign,nonatomic) long long accessoryContentMode;                                            //@synthesize accessoryContentMode=_accessoryContentMode - In the implementation block
@property (nonatomic,retain) NSString * accessoryFontName;                                              //@synthesize accessoryFontName=_accessoryFontName - In the implementation block
@property (assign,nonatomic) double accessoryViewBottomPadding;                                         //@synthesize accessoryViewBottomPadding=_accessoryViewBottomPadding - In the implementation block
@property (assign,nonatomic) double accessoryViewTopPadding;                                            //@synthesize accessoryViewTopPadding=_accessoryViewTopPadding - In the implementation block
@property (assign,nonatomic) double accessoryContentViewLeftPadding;                                    //@synthesize accessoryContentViewLeftPadding=_accessoryContentViewLeftPadding - In the implementation block
@property (assign,nonatomic) double accessoryContentViewRightPadding;                                   //@synthesize accessoryContentViewRightPadding=_accessoryContentViewRightPadding - In the implementation block
@property (assign,nonatomic) CGRect segmentedColorViewFrame;                                            //@synthesize segmentedColorViewFrame=_segmentedColorViewFrame - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSegments;                                       //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (assign,nonatomic) unsigned long long segmentedColorViewDirection;                            //@synthesize segmentedColorViewDirection=_segmentedColorViewDirection - In the implementation block
@property (nonatomic,retain) UIColor * accessoryFontColor;                                              //@synthesize accessoryFontColor=_accessoryFontColor - In the implementation block
@property (nonatomic,retain) UIColor * accessoryIconColor;                                              //@synthesize accessoryIconColor=_accessoryIconColor - In the implementation block
@property (assign,nonatomic) double accessoryFontSize;                                                  //@synthesize accessoryFontSize=_accessoryFontSize - In the implementation block
@property (assign,nonatomic) double accessoryLineHeight;                                                //@synthesize accessoryLineHeight=_accessoryLineHeight - In the implementation block
@property (assign,nonatomic) CGRect sharrowFrame;                                                       //@synthesize sharrowFrame=_sharrowFrame - In the implementation block
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText;                      //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
@property (assign,nonatomic) CGRect publisherLogoFrame;                                                 //@synthesize publisherLogoFrame=_publisherLogoFrame - In the implementation block
@property (assign,nonatomic) long long imagePosition;                                                   //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                                             //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double minimumHeightBetweenLowestTextFrameAndBottomOfContent;              //@synthesize minimumHeightBetweenLowestTextFrameAndBottomOfContent=_minimumHeightBetweenLowestTextFrameAndBottomOfContent - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustPublisherLogo;                                            //@synthesize shouldAdjustPublisherLogo=_shouldAdjustPublisherLogo - In the implementation block
@property (assign,nonatomic) BOOL layoutHasTooMuchWhiteSpaceInCurrentState;                             //@synthesize layoutHasTooMuchWhiteSpaceInCurrentState=_layoutHasTooMuchWhiteSpaceInCurrentState - In the implementation block
@property (assign,nonatomic) double whiteSpace;                                                         //@synthesize whiteSpace=_whiteSpace - In the implementation block
@property (assign,nonatomic) BOOL titleTruncates;                                                       //@synthesize titleTruncates=_titleTruncates - In the implementation block
+(id)zeroHeightLayoutAttributesWithFeedSettings:(id)arg1 ;
+(id)nfl_layoutAttributesForWidgetProperties:(id)arg1 feedSettings:(id)arg2 ;
-(void)setAccessoryViewTopPadding:(double)arg1 ;
-(void)setAccessoryContentViewRightPadding:(double)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setSharrowFrame:(CGRect)arg1 ;
-(BOOL)isShowingAccessoryText;
-(void)setTitleFontSize:(double)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(UIColor *)accessoryFontColor;
-(double)accessoryFontSize;
-(long long)imagePosition;
-(void)setTitleFrame:(CGRect)arg1 ;
-(CGRect)imageViewFrame;
-(BOOL)shouldAdjustPublisherLogo;
-(void)setExcerptLineHeight:(double)arg1 ;
-(BOOL)titleTruncates;
-(double)whiteSpace;
-(NSString *)excerptFontName;
-(UIColor *)publisherLogoColor;
-(unsigned long long)segmentedColorViewDirection;
-(void)setAccessoryViewFrame:(CGRect)arg1 ;
-(void)setAccessoryFontName:(NSString *)arg1 ;
-(void)setAccessoryFontSize:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPublisherLogoContentMode:(long long)arg1 ;
-(void)setAccessoryLineHeight:(double)arg1 ;
-(UIEdgeInsets)selectionInset;
-(UIColor *)numberedCircleColor;
-(CGRect)segmentedColorViewFrame;
-(void)setTitleLineHeight:(double)arg1 ;
-(void)setSegmentedColorViewDirection:(unsigned long long)arg1 ;
-(CGRect)accessoryViewFrame;
-(CGRect)publisherLogoFrame;
-(void)setSegmentedColorViewFrame:(CGRect)arg1 ;
-(void)setAccessoryFontColor:(UIColor *)arg1 ;
-(void)setNumberedCircleFrame:(CGRect)arg1 ;
-(void)setPublisherLogoColor:(UIColor *)arg1 ;
-(long long)publisherLogoContentMode;
-(CGRect)numberedCircleFrame;
-(void)setAccessoryContentMode:(long long)arg1 ;
-(unsigned long long)numberOfSegments;
-(BOOL)hasVideo;
-(void)setExcerptFrame:(CGRect)arg1 ;
-(void)setShouldAdjustPublisherLogo:(BOOL)arg1 ;
-(long long)titleTextAlignment;
-(void)setTitleTextAlignment:(long long)arg1 ;
-(void)setNumberOfSegments:(unsigned long long)arg1 ;
-(UIColor *)accessoryIconColor;
-(double)excerptFontSize;
-(double)accessoryLineHeight;
-(double)minimumHeightBetweenLowestTextFrameAndBottomOfContent;
-(NSString *)accessoryFontName;
-(CGRect)sharrowFrame;
-(void)setHasVideo:(BOOL)arg1 ;
-(double)excerptLineHeight;
-(void)setSelectionCornerRadius:(double)arg1 ;
-(void)setPublisherLogoFrame:(CGRect)arg1 ;
-(double)accessoryViewBottomPadding;
-(void)setImagePosition:(long long)arg1 ;
-(double)titleFontSize;
-(void)setExcerptFontName:(NSString *)arg1 ;
-(void)setTitleTruncates:(BOOL)arg1 ;
-(double)accessoryContentViewRightPadding;
-(void)setAccessoryIconColor:(UIColor *)arg1 ;
-(void)setAccessoryContentViewLeftPadding:(double)arg1 ;
-(unsigned long long)hash;
-(void)setWhiteSpace:(double)arg1 ;
-(double)selectionCornerRadius;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setTitleFontName:(NSString *)arg1 ;
-(double)titleLineHeight;
-(UIEdgeInsets)contentInset;
-(BOOL)layoutHasTooMuchWhiteSpaceInCurrentState;
-(NSString *)titleFontName;
-(double)accessoryViewTopPadding;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)setImageViewFrame:(CGRect)arg1 ;
-(long long)accessoryContentMode;
-(void)setNumberedCircleColor:(UIColor *)arg1 ;
-(CGRect)titleFrame;
-(void)setSelectionInset:(UIEdgeInsets)arg1 ;
-(void)setMinimumHeightBetweenLowestTextFrameAndBottomOfContent:(double)arg1 ;
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(void)setLayoutHasTooMuchWhiteSpaceInCurrentState:(BOOL)arg1 ;
-(CGRect)excerptFrame;
-(double)accessoryContentViewLeftPadding;
-(void)setExcerptFontSize:(double)arg1 ;
-(void)setAccessoryViewBottomPadding:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)backgroundColor;
@end


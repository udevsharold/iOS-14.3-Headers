/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IKNetworkRequestLoader;
@class NSString, NSURL, UIFont, UIColor, UIImage;

@interface VUIMonogramDescription : NSObject <NSCopying> {

	BOOL _shouldFallBackToSilhouette;
	BOOL _optimizedImageRendering;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	NSURL* _imageURL;
	UIFont* _font;
	long long _scaleMode;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	double _upscaleAdjustment;
	double _cornerRadius;
	UIColor* _fillColor;
	double _borderWidth;
	UIColor* _borderColor;
	id<IKNetworkRequestLoader> _requestLoader;
	UIImage* _placeholderImage;
	CGSize _size;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy,readonly) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;                                     //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                          //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL shouldFallBackToSilhouette;                              //@synthesize shouldFallBackToSilhouette=_shouldFallBackToSilhouette - In the implementation block
@property (assign,nonatomic) double borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                        //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic,__weak) id<IKNetworkRequestLoader> requestLoader;              //@synthesize requestLoader=_requestLoader - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                   //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL optimizedImageRendering;                                 //@synthesize optimizedImageRendering=_optimizedImageRendering - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)init;
-(UIFont *)font;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIEdgeInsets)padding;
-(void)setSize:(CGSize)arg1 ;
-(id)copyWithType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(double)borderWidth;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)scaleMode;
-(UIColor *)borderColor;
-(void)setScaleMode:(long long)arg1 ;
-(NSURL *)imageURL;
-(NSString *)lastName;
-(UIColor *)backgroundColor;
-(NSString *)firstName;
-(void)setBorderWidth:(double)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4 ;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(unsigned long long)preferedMonogramType;
-(void)setShouldFallBackToSilhouette:(BOOL)arg1 ;
-(double)upscaleAdjustment;
-(BOOL)shouldFallBackToSilhouette;
-(id<IKNetworkRequestLoader>)requestLoader;
-(void)setRequestLoader:(id<IKNetworkRequestLoader>)arg1 ;
-(BOOL)optimizedImageRendering;
-(void)setOptimizedImageRendering:(BOOL)arg1 ;
@end


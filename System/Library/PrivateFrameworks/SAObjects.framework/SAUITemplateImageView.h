/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class SAUIImageResource, NSArray, NSString;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (assign,nonatomic) float alpha; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) double imagePointHeight; 
@property (assign,nonatomic) double imagePointWidth; 
@property (nonatomic,copy) NSArray * monogramName; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSArray * themeImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)imageView;
-(id)groupIdentifier;
-(float)alpha;
-(SAUIImageResource *)image;
-(NSString *)style;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(double)imagePointHeight;
-(void)setImagePointHeight:(double)arg1 ;
-(double)imagePointWidth;
-(void)setImagePointWidth:(double)arg1 ;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
-(id)encodedClassName;
@end


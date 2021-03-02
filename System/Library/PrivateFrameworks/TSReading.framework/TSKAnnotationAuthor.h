/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject {

	NSString* mName;
	TSUColor* mColor;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) TSUColor * storageColor; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * textHighlightColor; 
@property (nonatomic,readonly) TSUColor * cellViolatorColor; 
@property (nonatomic,readonly) TSUColor * flagStrokeColor; 
@property (nonatomic,readonly) TSUColor * flagPressedColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (nonatomic,readonly) TSUColor * flagFillColor; 
@property (nonatomic,readonly) TSUColor * popoverColor; 
+(unsigned long long)presetColorCount;
+(id)authorStorageColorForIndex:(unsigned long long)arg1 ;
+(id)authorTextMarkupColorForIndex:(unsigned long long)arg1 ;
+(id)authorTextHighlightColorForIndex:(unsigned long long)arg1 ;
+(id)authorCellViolatorColorForIndex:(unsigned long long)arg1 ;
+(id)authorFlagStrokeColorForIndex:(unsigned long long)arg1 ;
+(id)authorFlagPressedColorForIndex:(unsigned long long)arg1 ;
+(id)authorChangeAdornmentsColorForIndex:(unsigned long long)arg1 ;
+(id)authorFlagFillColorForIndex:(unsigned long long)arg1 ;
+(id)authorPopoverColorForIndex:(unsigned long long)arg1 ;
+(id)authorColorAppearanceNameForIndex:(unsigned long long)arg1 ;
+(id)authorColorNameForIndex:(unsigned long long)arg1 ;
+(id)defaultAuthorName;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)componentRootObject;
-(BOOL)allowsImplicitComponentOwnership;
-(TSUColor *)storageColor;
-(unsigned long long)p_authorColorIndex;
-(void)setStorageColor:(TSUColor *)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(TSUColor *)textMarkupColor;
-(TSUColor *)textHighlightColor;
-(TSUColor *)cellViolatorColor;
-(TSUColor *)flagStrokeColor;
-(TSUColor *)flagPressedColor;
-(TSUColor *)changeAdornmentsColor;
-(TSUColor *)flagFillColor;
-(TSUColor *)popoverColor;
@end

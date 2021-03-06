/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SAUIColor, NSArray, SAUIImageResource, NSString;

@interface SAUIButton : SAAceView

@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) SAUIColor * textColor; 
+(id)button;
+(id)buttonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(SAUIImageResource *)image;
-(SAUIColor *)textColor;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setCommands:(NSArray *)arg1 ;
-(SAUIColor *)backgroundColor;
-(NSArray *)commands;
@end


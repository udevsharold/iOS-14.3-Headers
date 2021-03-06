/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * backgroundColors; 
@property (nonatomic,copy) NSDictionary * textColors; 
@property (nonatomic,copy) NSArray * titles; 
+(id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)segmentedControl;
-(id)groupIdentifier;
-(NSDictionary *)textColors;
-(NSDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
-(void)setTextColors:(NSDictionary *)arg1 ;
-(NSArray *)titles;
-(id)encodedClassName;
-(void)setTitles:(NSArray *)arg1 ;
@end


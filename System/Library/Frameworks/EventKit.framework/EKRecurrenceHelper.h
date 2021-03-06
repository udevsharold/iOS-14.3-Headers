/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	BOOL _dirty;
	BOOL _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(NSArray *)monthsOfTheYear;
-(void)setSpecifier:(NSString *)arg1 ;
-(NSArray *)setPositions;
-(NSArray *)daysOfTheYear;
-(NSArray *)daysOfTheMonth;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSString *)specifier;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(BOOL)isDirty;
-(NSArray *)daysOfTheWeek;
-(void)setSetPositions:(NSArray *)arg1 ;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(void)_clearArrays;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(void)_updateSpecifier;
-(id)initWithSpecifier:(id)arg1 ;
-(void)_parseSpecifierIfNeeded;
-(id)_parseIndexList:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
-(void)revert;
-(id)_parseDaysOfWeek:(SCD_Struct_EK8*)arg1 range:(SCD_Struct_EK7)arg2 ;
@end


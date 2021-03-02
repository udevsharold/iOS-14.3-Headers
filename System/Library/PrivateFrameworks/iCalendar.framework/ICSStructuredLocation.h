/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, NSData;

@interface ICSStructuredLocation : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * loctype; 
@property (nonatomic,retain) NSString * abURLString; 
@property (nonatomic,retain) NSData * mapKitHandle; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * routing; 
-(double)radius;
-(void)setAddress:(NSString *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(NSString *)routing;
-(NSString *)fmtype;
-(NSString *)address;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFmtype:(NSString *)arg1 ;
-(NSString *)abURLString;
-(void)setAbURLString:(NSString *)arg1 ;
-(NSData *)mapKitHandle;
-(NSString *)loctype;
-(void)setTitle:(NSString *)arg1 ;
-(void)setRouting:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSString *)displayName;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setLoctype:(NSString *)arg1 ;
@end

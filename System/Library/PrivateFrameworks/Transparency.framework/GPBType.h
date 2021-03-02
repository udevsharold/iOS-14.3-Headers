/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBType : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSMutableArray * fieldsArray; 
@property (nonatomic,readonly) unsigned long long fieldsArray_Count; 
@property (nonatomic,retain) NSMutableArray * oneofsArray; 
@property (nonatomic,readonly) unsigned long long oneofsArray_Count; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,retain) GPBSourceContext * sourceContext; 
@property (assign,nonatomic) BOOL hasSourceContext; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

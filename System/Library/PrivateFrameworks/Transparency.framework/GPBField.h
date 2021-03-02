/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray;

@interface GPBField : GPBMessage

@property (assign,nonatomic) int kind; 
@property (assign,nonatomic) int cardinality; 
@property (assign,nonatomic) int number; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * typeURL; 
@property (assign,nonatomic) int oneofIndex; 
@property (assign,nonatomic) BOOL packed; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * jsonName; 
@property (nonatomic,copy) NSString * defaultValue; 
+(id)descriptor;
@end

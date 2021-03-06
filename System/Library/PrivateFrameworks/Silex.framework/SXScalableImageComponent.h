/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString, SXFormattedText;

@interface SXScalableImageComponent : SXComponent

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) BOOL userControllable; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXFormattedText * captionComponent; 
+(id)typeString;
-(SXFormattedText *)captionComponent;
-(NSString *)accessibilityCaption;
-(BOOL)userControllable;
-(NSString *)caption;
-(NSString *)imageIdentifier;
-(unsigned long long)traits;
@end


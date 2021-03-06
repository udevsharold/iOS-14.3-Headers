/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/SBSUserNotificationTextFieldDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * value; 
@property (assign,getter=isSecure,nonatomic) BOOL secure; 
@property (assign,nonatomic) unsigned long long maxLength; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
@end


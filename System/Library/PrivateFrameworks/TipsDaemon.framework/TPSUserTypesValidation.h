/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetUserTypes; 
@property (nonatomic,readonly) NSArray * excludeUserTypes; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetUserTypes;
-(NSArray *)excludeUserTypes;
-(id)initWithTargetUserTypes:(id)arg1 excludeUserTypes:(id)arg2 ;
@end


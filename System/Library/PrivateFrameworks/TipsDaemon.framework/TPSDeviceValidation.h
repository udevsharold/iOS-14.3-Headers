/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSDeviceValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetDevices; 
@property (nonatomic,readonly) NSArray * excludeDevices; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetDevices;
-(NSArray *)excludeDevices;
-(id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2 ;
-(BOOL)_matchesDevices:(id)arg1 ;
@end

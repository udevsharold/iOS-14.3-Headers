/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DRSRequestMO.h>

@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (assign,nonatomic) BOOL includeOsLog; 
@property (assign,nonatomic) BOOL includeOsSignpost; 
@property (nonatomic,copy) NSNumber * maxMAT; 
@property (nonatomic,copy) NSNumber * minMAT; 
@property (assign,nonatomic) BOOL scrubbed; 
+(id)fetchRequest;
@end


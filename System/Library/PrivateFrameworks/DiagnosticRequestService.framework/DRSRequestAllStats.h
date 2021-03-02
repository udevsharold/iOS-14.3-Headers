/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary;

@interface DRSRequestAllStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perBuildStats; 
+(id)keyName;
+(id)statsForRequests:(id)arg1 ;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(id)init;
-(NSDictionary *)perBuildStats;
-(id)terminalRequestProtobufRepresentation;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDFHIREndpointSchema.h>

@interface HDFHIRAuthorizationSchema : HDFHIREndpointSchema

@property (nonatomic,readonly) long long authorizationEndpointType; 
+(BOOL)validateName:(id)arg1 error:(out id*)arg2 ;
-(id)name;
-(long long)authorizationEndpointType;
@end

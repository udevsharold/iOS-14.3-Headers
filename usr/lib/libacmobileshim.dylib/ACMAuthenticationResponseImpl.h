/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMMessage.h>
#import <libobjc.A.dylib/ACMAuthenticationResponse.h>

@class NSString, NSDictionary, NSError;

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticationResponse;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/_MDExtensionContext.h>
#import <libobjc.A.dylib/_MDRemoteExtensionContextProtocol.h>

@class CSIndexExtensionRequestHandler, NSString;

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {

	CSIndexExtensionRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CSIndexExtensionRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)setRequestHandler:(CSIndexExtensionRequestHandler *)arg1 ;
-(id)hostContext;
-(CSIndexExtensionRequestHandler *)requestHandler;
-(void)getLastUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
@end

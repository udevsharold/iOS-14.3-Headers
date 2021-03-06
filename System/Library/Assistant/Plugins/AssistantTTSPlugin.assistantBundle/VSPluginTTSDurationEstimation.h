/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Assistant/Plugins/AssistantTTSPlugin.assistantBundle/AssistantTTSPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFServiceCommand.h>

@class SATTSEstimateTTSRequestDuration, NSString;

@interface VSPluginTTSDurationEstimation : NSObject <AFServiceCommand> {

	SATTSEstimateTTSRequestDuration* _request;

}

@property (nonatomic,retain) SATTSEstimateTTSRequestDuration * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SATTSEstimateTTSRequestDuration *)request;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setRequest:(SATTSEstimateTTSRequestDuration *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoWidgetServiceServer;
@interface CHSNSURLSessiondService : NSObject {

	id<CHSChronoWidgetServiceServer> _server;

}

@property (nonatomic,readonly) id<CHSChronoWidgetServiceServer> server;              //@synthesize server=_server - In the implementation block
-(id)initWithServer:(id)arg1 ;
-(id)init;
-(id<CHSChronoWidgetServiceServer>)server;
-(id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSRemotePlistController;

@interface WBSUserAgentQuirksManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(void)getQuirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBuiltInQuirkListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)prepareForTermination;
@end


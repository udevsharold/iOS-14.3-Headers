/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton {

	BOOL _supportsRegistration;

}
-(id)_init;
-(void)checkinEngine:(id)arg1 ;
-(id)_defaultRegistrationDirectory;
-(id)_processesFileURL;
-(id)_allProcesses;
-(void)_accessEngineDataForProcess:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableEngines:(/*^block*/id)arg1 ;
@end


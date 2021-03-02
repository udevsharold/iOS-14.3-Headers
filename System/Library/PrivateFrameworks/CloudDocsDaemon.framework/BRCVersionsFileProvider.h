/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {

	NSMutableDictionary* _operationsByName;

}
-(id)_fileReactorID;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithVolume:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPFilePresenterObserver.h>

@class NSFileProviderManager;

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver> {

	NSFileProviderManager* _parentConnection;

}

@property (__weak) NSFileProviderManager * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
-(void)observePresentedFilesDidChange:(id)arg1 ;
-(void)setParentConnection:(NSFileProviderManager *)arg1 ;
-(NSFileProviderManager *)parentConnection;
@end


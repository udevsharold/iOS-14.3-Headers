/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSLocalDraftsDeviceManagerType.h>

@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType> {

	 listener;
	 delegate;

}

@property (assign,__weak,nonatomic) id<TSLocalDraftsDelegate> delegate; 
-(id)init;
-(void)setDelegate:(id<TSLocalDraftsDelegate>)arg1 ;
-(id<TSLocalDraftsDelegate>)delegate;
@end


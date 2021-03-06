/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@protocol NSCopying;
@class NSExtension;

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	id<NSCopying> _request;
	NSExtension* _weakExtension;
	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,retain) id<NSCopying> request;                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;              //@synthesize weakExtension=_weakExtension - In the implementation block
@property (nonatomic,copy) id viewServiceTerminationBlock;                    //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id<NSCopying>)request;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(double)_keyboardHeightOffset;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
-(id)viewServiceTerminationBlock;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFFileStorageServiceOperation.h>

@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation> {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;                                     //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCancelled;
-(void)cancel;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
@end


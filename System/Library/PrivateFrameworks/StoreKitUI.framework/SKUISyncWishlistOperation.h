/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUISyncWishlistOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(id)init;
-(id)initWithClientContext:(id)arg1 ;
-(void)main;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(void)_sendLocalChangesForWishlist:(id)arg1 ;
-(BOOL)_loadRemoteItemsForWishlist:(id)arg1 didChange:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(BOOL*)arg3 error:(id*)arg4 ;
@end


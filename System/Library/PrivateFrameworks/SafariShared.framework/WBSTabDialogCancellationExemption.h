/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSTabDialogCancellationExemption : NSObject {

	/*^block*/id _cancellationExemptionHandler;

}
+(id)provisionalNavigationExemption;
+(id)committedNavigationExemption;
+(id)sameOriginNavigationExemption:(id)arg1 ;
-(id)init;
-(id)initWithCancellationHandler:(/*^block*/id)arg1 ;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
@end


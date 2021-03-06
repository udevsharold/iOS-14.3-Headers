/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPCoreSpotlightExtensionsTask : NSObject {

	/*^block*/id _filterBlock;
	/*^block*/id _performBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id filterBlock;                  //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,copy) id performBlock;                 //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)setFilterBlock:(id)arg1 ;
-(id)performBlock;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setPerformBlock:(id)arg1 ;
-(void)start;
-(id)filterBlock;
-(void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


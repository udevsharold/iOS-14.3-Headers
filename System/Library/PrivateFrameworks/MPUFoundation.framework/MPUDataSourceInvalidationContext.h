/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPUDataSourceInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDataSourceCounts;

}

@property (nonatomic,readonly) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (nonatomic,readonly) BOOL invalidateDataSourceCounts;              //@synthesize invalidateDataSourceCounts=_invalidateDataSourceCounts - In the implementation block
-(BOOL)invalidateEverything;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)invalidateDataSourceCounts;
-(void)setInvalidateDataSourceCounts:(BOOL)arg1 ;
@end

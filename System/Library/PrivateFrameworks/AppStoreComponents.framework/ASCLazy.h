/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@interface ASCLazy : NSObject {

	os_unfair_lock_s _loadingGuard;
	id _objectIfLoaded;
	/*^block*/id _factory;

}

@property (retain) id objectIfLoaded;                                      //@synthesize objectIfLoaded=_objectIfLoaded - In the implementation block
@property (nonatomic,copy,readonly) id factory;                            //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s loadingGuard;              //@synthesize loadingGuard=_loadingGuard - In the implementation block
@property (readonly) id object; 
-(id)factory;
-(id)object;
-(id)description;
-(id)initWithFactory:(/*^block*/id)arg1 ;
-(id)objectIfLoaded;
-(void)setObjectIfLoaded:(id)arg1 ;
-(os_unfair_lock_s)loadingGuard;
@end

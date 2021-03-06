/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryBundle, PLLazyObject;

@interface PLDatabaseContext : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLLazyObject* _lazyHighPriorityTransientLibrary;
	PLLazyObject* _lazyLowPriorityTransientLibrary;
	PLLazyObject* _lazyCplLibrary;
	PLLazyObject* _lazyMomentLibrary;
	PLLazyObject* _lazyNonTransientLibrary;

}
-(id)momentLibrary;
-(id)cplLibrary;
-(void)perform:(/*^block*/id)arg1 ;
-(id)nonTransientLibrary;
-(void)dealloc;
-(void)performTransactionSync:(/*^block*/id)arg1 ;
-(id)lowPriorityTransientLibrary;
-(id)highPriorityTransientLibrary;
-(id)newNonTransientLibrary;
-(id)newCplLibrary;
-(id)newLowPriorityTransientLibrary;
-(id)newHighPriorityTransientLibrary;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)transientLibraryWithCurrentQoS;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)newMomentLibrary;
@end


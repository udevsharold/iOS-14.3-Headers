/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVAsyncOperation.h>

@protocol MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation {

	NSString* _databasePath;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,copy,readonly) NSString * databasePath;                                                    //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic,__weak) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
-(NSString *)databasePath;
-(void)execute;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2 ;
@end


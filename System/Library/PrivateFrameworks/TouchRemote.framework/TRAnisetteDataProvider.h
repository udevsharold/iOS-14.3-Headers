/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <libobjc.A.dylib/AKAnisetteServiceProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRSession, NSString;

@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying> {

	TRSession* _session;

}

@property (nonatomic,retain) TRSession * session;                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(TRSession *)arg1 ;
-(TRSession *)session;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

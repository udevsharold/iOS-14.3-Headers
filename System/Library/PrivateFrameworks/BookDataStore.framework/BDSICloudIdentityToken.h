/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@class NSString;

@interface BDSICloudIdentityToken : NSObject {

	NSString* _token;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)tokenForCurrentIdentityIfCloudKitEnabled;
-(void)setToken:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(NSString *)token;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurrentIdentity;
-(id)initFromArchive:(id)arg1 ;
-(id)_hashFor:(id)arg1 ;
@end


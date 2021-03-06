/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination {

	IDSURI* _destinationURI;
	BOOL _isGuest;

}

@property (nonatomic,retain) IDSURI * destinationURI;              //@synthesize destinationURI=_destinationURI - In the implementation block
@property (assign,nonatomic) BOOL isGuest;                         //@synthesize isGuest=_isGuest - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isDeviceURI:(id)arg1 ;
-(id)initWithURI:(id)arg1 isGuest:(BOOL)arg2 ;
-(IDSURI *)destinationURI;
-(void)setDestinationURI:(IDSURI *)arg1 ;
-(void)setIsGuest:(BOOL)arg1 ;
-(id)initWithDeviceURI:(id)arg1 ;
-(id)initWithIDSDeviceURI:(id)arg1 ;
-(id)initWithRapportPublicIdentifierURI:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isGuest;
-(BOOL)isDevice;
-(id)groupID;
-(id)destinationURIs;
-(void)encodeWithCoder:(id)arg1 ;
@end


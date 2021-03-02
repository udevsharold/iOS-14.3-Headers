/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RKNLEventToken : NSObject {

	unsigned _tokenID;
	NSString* _string;
	long long _location;
	long long _length;

}

@property (retain) NSString * string;               //@synthesize string=_string - In the implementation block
@property (assign) unsigned tokenID;                //@synthesize tokenID=_tokenID - In the implementation block
@property (assign) long long location;              //@synthesize location=_location - In the implementation block
@property (assign) long long length;                //@synthesize length=_length - In the implementation block
-(void)setString:(NSString *)arg1 ;
-(void)setLength:(long long)arg1 ;
-(long long)length;
-(NSString *)string;
-(unsigned)tokenID;
-(long long)location;
-(void)setTokenID:(unsigned)arg1 ;
-(void)setLocation:(long long)arg1 ;
-(id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3 ;
@end

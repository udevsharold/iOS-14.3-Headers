/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PTRowAction : NSObject <NSSecureCoding> {

	/*^block*/id _handler;
	BOOL _isEncodable;

}

@property (assign,nonatomic) BOOL isEncodable;              //@synthesize isEncodable=_isEncodable - In the implementation block
@property (nonatomic,readonly) id handler; 
+(BOOL)supportsSecureCoding;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(/*^block*/id)defaultHandler;
-(BOOL)isEncodable;
-(void)setIsEncodable:(BOOL)arg1 ;
-(BOOL)deselectsRowOnSuccess;
@end

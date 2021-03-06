/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <FileProvider/FPSandboxingURLWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DOCSymbolicLocationURLWrapper : FPSandboxingURLWrapper <NSCopying, NSSecureCoding> {

	unsigned long long _symbolicLocation;

}

@property (assign,nonatomic) unsigned long long symbolicLocation;              //@synthesize symbolicLocation=_symbolicLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSymbolicLocation:(unsigned long long)arg1 ;
-(unsigned long long)symbolicLocation;
@end


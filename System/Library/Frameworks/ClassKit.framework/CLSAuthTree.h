/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber;

@interface CLSAuthTree : NSObject <NSSecureCoding> {

	NSMutableDictionary* _graph;
	NSNumber* _overridingStatus;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_addNode:(id)arg1 parentStatusID:(id)arg2 ;
-(id)initWithOverridingStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3 ;
-(void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4 ;
-(long long)authStatusAtIdentifierPath:(id)arg1 ;
@end

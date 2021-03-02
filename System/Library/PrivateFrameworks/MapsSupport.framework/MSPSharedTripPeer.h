/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSPSharedTripPeer : NSObject {

	BOOL _canControlSharing;
	BOOL _canControlReceiving;

}

@property (nonatomic,readonly) BOOL canControlSharing;                //@synthesize canControlSharing=_canControlSharing - In the implementation block
@property (nonatomic,readonly) BOOL canControlReceiving;              //@synthesize canControlReceiving=_canControlReceiving - In the implementation block
-(BOOL)canControlReceiving;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)canControlSharing;
@end

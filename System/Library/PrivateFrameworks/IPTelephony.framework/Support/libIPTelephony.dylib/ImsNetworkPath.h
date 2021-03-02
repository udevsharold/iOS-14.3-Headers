/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
@class NWPathEvaluator;

@interface ImsNetworkPath : NSObject {

	NWPathEvaluator* _pathEvaluator;
	ImsNetworkPathDelegate* _delegate;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _ifaceName;
	BOOL _observingPath;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)ifaceName;
-(id)initWithInterface:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 delegate:(ImsNetworkPathDelegate*)arg2 ;
-(void)evaluateInterface;
@end

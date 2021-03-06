/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@interface ETDataSourceBuf : NSObject <ETDataSource> {

	map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2> > > > >* blobs;
	int number_of_data_points;

}
-(float*)dataAtIndex:(unsigned long long)arg1 key:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 ;
-(id)dataPointAtIndex:(int)arg1 ;
-(void)setBlobs:(const map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >*)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg3 ;
-(int)numberOfDataPoints;
@end

